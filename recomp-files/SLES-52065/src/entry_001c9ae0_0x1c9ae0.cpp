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

// Function: entry_001c9ae0
// Address: 0x1c9ae0 - 0x1c9b28
void entry_001c9ae0_0x1c9ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9ae0_0x1c9ae0");
#endif

    switch (ctx->pc) {
        case 0x1c9af0u: goto label_1c9af0;
        case 0x1c9b04u: goto label_1c9b04;
        default: break;
    }

    ctx->pc = 0x1c9ae0u;

    // 0x1c9ae0: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x1c9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c9ae4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c9ae8: 0xc073150  jal         func_1CC540
    ctx->pc = 0x1C9AE8u;
    SET_GPR_U32(ctx, 31, 0x1C9AF0u);
    ctx->pc = 0x1C9AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AE8u;
    // 0x1c9aec: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC540u, 0x1C9AE8u, 0x1C9AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AF0u;
label_1c9af0:
    // 0x1c9af0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c9af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c9af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c9af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c9afc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9AFCu;
    SET_GPR_U32(ctx, 31, 0x1C9B04u);
    ctx->pc = 0x1C9B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AFCu;
    // 0x1c9b00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9AFCu, 0x1C9B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B04u;
label_1c9b04:
    // 0x1c9b04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b08: 0x8023f8e8  lb          $v1, -0x718($at)
    ctx->pc = 0x1c9b08u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36F8E8u));
    // 0x1c9b0c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9B0Cu;
    {
        const bool branch_taken_0x1c9b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B0Cu;
        // 0x1c9b10: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b0c) {
            ctx->pc = 0x1C9B28u;
            return;
        }
    }
    ctx->pc = 0x1C9B14u;
    // 0x1c9b14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b18: 0xac24f8e0  sw          $a0, -0x720($at)
    ctx->pc = 0x1c9b18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F8E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8E0u, _value); } while (0);
    // 0x1c9b1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b24: 0xa023f8e8  sb          $v1, -0x718($at)
    ctx->pc = 0x1c9b24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F8E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8E8u, _value); } while (0);
    ctx->pc = 0x1c9b28u;
}
