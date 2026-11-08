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

// Function: FUN_00203660
// Address: 0x203660 - 0x2036b4
void FUN_00203660_0x203660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203660_0x203660");
#endif

    switch (ctx->pc) {
        case 0x203678u: goto label_203678;
        default: break;
    }

    ctx->pc = 0x203660u;

    // 0x203660: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x203660u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203664: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x203664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203668: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x203668u;
    {
        const bool branch_taken_0x203668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203668u;
        // 0x20366c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203668) {
            ctx->pc = 0x2036ACu;
            goto label_2036ac;
        }
    }
    ctx->pc = 0x203670u;
    // 0x203670: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x203670u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x203674: 0x0  nop
    ctx->pc = 0x203674u;
    // NOP
label_203678:
    // 0x203678: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x203678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x20367c: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x20367cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
    // 0x203680: 0x24e34dd1  addiu       $v1, $a3, 0x4DD1
    ctx->pc = 0x203680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 19921));
    // 0x203684: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x203684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x203688: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x203688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20368c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20368cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x203690: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x203690u;
    {
        const bool branch_taken_0x203690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203690u;
        // 0x203694: 0x24a2ffe0  addiu       $v0, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203690) {
            ctx->pc = 0x20369Cu;
            goto label_20369c;
        }
    }
    ctx->pc = 0x203698u;
    // 0x203698: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x203698u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_20369c:
    // 0x20369c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20369cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2036a0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2036a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2036a4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2036A4u;
    {
        const bool branch_taken_0x2036a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2036A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036A4u;
        // 0x2036a8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036a4) {
            ctx->pc = 0x203678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203678;
        }
    }
    ctx->pc = 0x2036ACu;
label_2036ac:
    // 0x2036ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2036ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2036B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036ACu;
        // 0x2036b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2036ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2036B4u;
}
