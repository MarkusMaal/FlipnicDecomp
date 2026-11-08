#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001c0910
// Address: 0x1c0910 - 0x1c0958
void entry_001c0910_0x1c0910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0910_0x1c0910");
#endif

    switch (ctx->pc) {
        case 0x1c0920u: goto label_1c0920;
        case 0x1c0934u: goto label_1c0934;
        default: break;
    }

    ctx->pc = 0x1c0910u;

    // 0x1c0910: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x1c0910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c0914: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c0914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c0918: 0xc073134  jal         func_1CC4D0
    ctx->pc = 0x1C0918u;
    SET_GPR_U32(ctx, 31, 0x1C0920u);
    ctx->pc = 0x1C091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0918u;
    // 0x1c091c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC4D0u, 0x1C0918u, 0x1C0920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0920u;
label_1c0920:
    // 0x1c0920: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c0920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0924: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0928: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c0928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c092c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C092Cu;
    SET_GPR_U32(ctx, 31, 0x1C0934u);
    ctx->pc = 0x1C0930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C092Cu;
    // 0x1c0930: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C092Cu, 0x1C0934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0934u;
label_1c0934:
    // 0x1c0934: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0938: 0x8023f568  lb          $v1, -0xA98($at)
    ctx->pc = 0x1c0938u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36F568u));
    // 0x1c093c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C093Cu;
    {
        const bool branch_taken_0x1c093c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C093Cu;
        // 0x1c0940: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c093c) {
            ctx->pc = 0x1C0958u;
            return;
        }
    }
    ctx->pc = 0x1C0944u;
    // 0x1c0944: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0948: 0xac24f560  sw          $a0, -0xAA0($at)
    ctx->pc = 0x1c0948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F560u, _value); } while (0);
    // 0x1c094c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c094cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0950: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0954: 0xa023f568  sb          $v1, -0xA98($at)
    ctx->pc = 0x1c0954u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F568u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F568u, _value); } while (0);
    ctx->pc = 0x1c0958u;
}
