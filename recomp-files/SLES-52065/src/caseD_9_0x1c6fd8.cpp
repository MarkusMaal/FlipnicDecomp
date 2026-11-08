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

// Function: caseD_9
// Address: 0x1c6fd8 - 0x1c701c
void caseD_9_0x1c6fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1c6fd8");
#endif

    switch (ctx->pc) {
        case 0x1c6fe4u: goto label_1c6fe4;
        case 0x1c6ff0u: goto label_1c6ff0;
        case 0x1c6ffcu: goto label_1c6ffc;
        default: break;
    }

    ctx->pc = 0x1c6fd8u;

    // 0x1c6fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fdc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6FDCu;
    SET_GPR_U32(ctx, 31, 0x1C6FE4u);
    ctx->pc = 0x1C6FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FDCu;
    // 0x1c6fe0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6FDCu, 0x1C6FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FE4u;
label_1c6fe4:
    // 0x1c6fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fe8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6FE8u;
    SET_GPR_U32(ctx, 31, 0x1C6FF0u);
    ctx->pc = 0x1C6FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FE8u;
    // 0x1c6fec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6FE8u, 0x1C6FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FF0u;
label_1c6ff0:
    // 0x1c6ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ff4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6FF4u;
    SET_GPR_U32(ctx, 31, 0x1C6FFCu);
    ctx->pc = 0x1C6FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FF4u;
    // 0x1c6ff8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6FF4u, 0x1C6FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FFCu;
label_1c6ffc:
    // 0x1c6ffc: 0x8e03018c  lw          $v1, 0x18C($s0)
    ctx->pc = 0x1c6ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x1c7000: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7004: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7004u;
    {
        const bool branch_taken_0x1c7004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7004u;
        // 0x1c7008: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7004) {
            ctx->pc = 0x1C701Cu;
            return;
        }
    }
    ctx->pc = 0x1C700Cu;
    // 0x1c700c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1c700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1c7010: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1c7010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1c7014: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7018: 0xac22f888  sw          $v0, -0x778($at)
    ctx->pc = 0x1c7018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F888u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F888u, _value); } while (0);
    ctx->pc = 0x1c701cu;
}
