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

// Function: FUN_0018fd00
// Address: 0x18fd00 - 0x18fd88
void FUN_0018fd00_0x18fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018fd00_0x18fd00");
#endif

    switch (ctx->pc) {
        case 0x18fd1cu: goto label_18fd1c;
        default: break;
    }

    ctx->pc = 0x18fd00u;

    // 0x18fd00: 0xac800210  sw          $zero, 0x210($a0)
    ctx->pc = 0x18fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 0));
    // 0x18fd04: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x18fd04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18fd08: 0x7c820220  sq          $v0, 0x220($a0)
    ctx->pc = 0x18fd08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 544), GPR_VEC(ctx, 2));
    // 0x18fd0c: 0xac840230  sw          $a0, 0x230($a0)
    ctx->pc = 0x18fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 4));
    // 0x18fd10: 0x8c850230  lw          $a1, 0x230($a0)
    ctx->pc = 0x18fd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x18fd14: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18FD14u;
    {
        const bool branch_taken_0x18fd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD14u;
        // 0x18fd18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd14) {
            ctx->pc = 0x18FD68u;
            goto label_18fd68;
        }
    }
    ctx->pc = 0x18FD1Cu;
label_18fd1c:
    // 0x18fd1c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x18fd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18fd20: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x18fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x18fd24: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18FD24u;
    {
        const bool branch_taken_0x18fd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fd24) {
            ctx->pc = 0x18FD5Cu;
            goto label_18fd5c;
        }
    }
    ctx->pc = 0x18FD2Cu;
    // 0x18fd2c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18fd2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fd30: 0x78860220  lq          $a2, 0x220($a0)
    ctx->pc = 0x18fd30u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x18fd34: 0x70c210a8  pceqw       $v0, $a2, $v0
    ctx->pc = 0x18fd34u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x18fd38: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x18fd38u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x18fd3c: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x18fd3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x18fd40: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18fd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18fd44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FD44u;
    {
        const bool branch_taken_0x18fd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fd44) {
            ctx->pc = 0x18FD68u;
            goto label_18fd68;
        }
    }
    ctx->pc = 0x18FD4Cu;
    // 0x18fd4c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x18fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18fd50: 0xac820230  sw          $v0, 0x230($a0)
    ctx->pc = 0x18fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
    // 0x18fd54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18FD54u;
    {
        const bool branch_taken_0x18fd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD54u;
        // 0x18fd58: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd54) {
            ctx->pc = 0x18FD80u;
            goto label_18fd80;
        }
    }
    ctx->pc = 0x18FD5Cu;
label_18fd5c:
    // 0x18fd5c: 0x8c820210  lw          $v0, 0x210($a0)
    ctx->pc = 0x18fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x18fd60: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FD60u;
    {
        const bool branch_taken_0x18fd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18fd60) {
            ctx->pc = 0x18FD74u;
            goto label_18fd74;
        }
    }
    ctx->pc = 0x18FD68u;
label_18fd68:
    // 0x18fd68: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x18fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18fd6c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18FD6Cu;
    {
        const bool branch_taken_0x18fd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fd6c) {
            ctx->pc = 0x18FD1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fd1c;
        }
    }
    ctx->pc = 0x18FD74u;
label_18fd74:
    // 0x18fd74: 0x0  nop
    ctx->pc = 0x18fd74u;
    // NOP
    // 0x18fd78: 0xac850230  sw          $a1, 0x230($a0)
    ctx->pc = 0x18fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 5));
    // 0x18fd7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fd7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fd80:
    // 0x18fd80: 0x3e00008  jr          $ra
    ctx->pc = 0x18FD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FD88u;
}
