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

// Function: entry_001ecc38
// Address: 0x1ecc38 - 0x1ecc88
void entry_001ecc38_0x1ecc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecc38_0x1ecc38");
#endif

    switch (ctx->pc) {
        case 0x1ecc70u: goto label_1ecc70;
        default: break;
    }

    ctx->pc = 0x1ecc38u;

label_1ecc38:
    // 0x1ecc38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ecc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ecc3c: 0x0  nop
    ctx->pc = 0x1ecc3cu;
    // NOP
    // 0x1ecc40: 0x0  nop
    ctx->pc = 0x1ecc40u;
    // NOP
    // 0x1ecc44: 0x0  nop
    ctx->pc = 0x1ecc44u;
    // NOP
    // 0x1ecc48: 0x0  nop
    ctx->pc = 0x1ecc48u;
    // NOP
    // 0x1ecc4c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ECC4Cu;
    {
        const bool branch_taken_0x1ecc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc4c) {
            ctx->pc = 0x1ECC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecc38;
        }
    }
    ctx->pc = 0x1ECC54u;
    // 0x1ecc54: 0x2665c3d0  addiu       $a1, $s3, -0x3C30
    ctx->pc = 0x1ecc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951888));
    // 0x1ecc58: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1ecc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1ecc5c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ecc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ecc60: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1ecc60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ecc64: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x1ecc64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ecc68: 0xc07b232  jal         func_1EC8C8
    ctx->pc = 0x1ECC68u;
    SET_GPR_U32(ctx, 31, 0x1ECC70u);
    ctx->pc = 0x1ECC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC68u;
    // 0x1ecc6c: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC8C8u, 0x1ECC68u, 0x1ECC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC70u;
label_1ecc70:
    // 0x1ecc70: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1ecc70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ecc74: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ecc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ecc78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECC78u;
    {
        const bool branch_taken_0x1ecc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ECC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC78u;
        // 0x1ecc7c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc78) {
            ctx->pc = 0x1ECC88u;
            return;
        }
    }
    ctx->pc = 0x1ECC80u;
    // 0x1ecc80: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECC80u;
    {
        const bool branch_taken_0x1ecc80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC80u;
        // 0x1ecc84: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc80) {
            ctx->pc = 0x1ECC90u;
            return;
        }
    }
    ctx->pc = 0x1ECC88u;
}
