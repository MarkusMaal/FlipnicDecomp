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

// Function: FUN_001dfa58
// Address: 0x1dfa58 - 0x1dfb24
void FUN_001dfa58_0x1dfa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dfa58_0x1dfa58");
#endif

    switch (ctx->pc) {
        case 0x1dfb08u: goto label_1dfb08;
        default: break;
    }

    ctx->pc = 0x1dfa58u;

    // 0x1dfa58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dfa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dfa5c: 0x480002c  bltz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1DFA5Cu;
    {
        const bool branch_taken_0x1dfa5c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1DFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA5Cu;
        // 0x1dfa60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa5c) {
            ctx->pc = 0x1DFB10u;
            goto label_1dfb10;
        }
    }
    ctx->pc = 0x1DFA64u;
    // 0x1dfa64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1dfa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dfa68: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DFA68u;
    {
        const bool branch_taken_0x1dfa68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA68u;
        // 0x1dfa6c: 0x28a20005  slti        $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa68) {
            ctx->pc = 0x1DFAC0u;
            goto label_1dfac0;
        }
    }
    ctx->pc = 0x1DFA70u;
    // 0x1dfa70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DFA70u;
    {
        const bool branch_taken_0x1dfa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA70u;
        // 0x1dfa74: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa70) {
            ctx->pc = 0x1DFA90u;
            goto label_1dfa90;
        }
    }
    ctx->pc = 0x1DFA78u;
    // 0x1dfa78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dfa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dfa7c: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DFA7Cu;
    {
        const bool branch_taken_0x1dfa7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA7Cu;
        // 0x1dfa80: 0x411c0  sll         $v0, $a0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa7c) {
            ctx->pc = 0x1DFAA8u;
            goto label_1dfaa8;
        }
    }
    ctx->pc = 0x1DFA84u;
    // 0x1dfa84: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1DFA84u;
    {
        const bool branch_taken_0x1dfa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA84u;
        // 0x1dfa88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa84) {
            ctx->pc = 0x1DFB18u;
            goto label_1dfb18;
        }
    }
    ctx->pc = 0x1DFA8Cu;
    // 0x1dfa8c: 0x0  nop
    ctx->pc = 0x1dfa8cu;
    // NOP
label_1dfa90:
    // 0x1dfa90: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DFA90u;
    {
        const bool branch_taken_0x1dfa90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA90u;
        // 0x1dfa94: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa90) {
            ctx->pc = 0x1DFAD8u;
            goto label_1dfad8;
        }
    }
    ctx->pc = 0x1DFA98u;
    // 0x1dfa98: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DFA98u;
    {
        const bool branch_taken_0x1dfa98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA98u;
        // 0x1dfa9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa98) {
            ctx->pc = 0x1DFAF0u;
            goto label_1dfaf0;
        }
    }
    ctx->pc = 0x1DFAA0u;
    // 0x1dfaa0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1DFAA0u;
    {
        const bool branch_taken_0x1dfaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAA0u;
        // 0x1dfaa4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfaa0) {
            ctx->pc = 0x1DFB1Cu;
            goto label_1dfb1c;
        }
    }
    ctx->pc = 0x1DFAA8u;
label_1dfaa8:
    // 0x1dfaa8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dfaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dfaac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dfaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dfab0: 0x8c639f10  lw          $v1, -0x60F0($v1)
    ctx->pc = 0x1dfab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942480)));
    // 0x1dfab4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1DFAB4u;
    {
        const bool branch_taken_0x1dfab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAB4u;
        // 0x1dfab8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfab4) {
            ctx->pc = 0x1DFB18u;
            goto label_1dfb18;
        }
    }
    ctx->pc = 0x1DFABCu;
    // 0x1dfabc: 0x0  nop
    ctx->pc = 0x1dfabcu;
    // NOP
label_1dfac0:
    // 0x1dfac0: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x1dfac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1dfac4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dfac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dfac8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dfac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dfacc: 0x8c639f14  lw          $v1, -0x60EC($v1)
    ctx->pc = 0x1dfaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942484)));
    // 0x1dfad0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DFAD0u;
    {
        const bool branch_taken_0x1dfad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAD0u;
        // 0x1dfad4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfad0) {
            ctx->pc = 0x1DFB18u;
            goto label_1dfb18;
        }
    }
    ctx->pc = 0x1DFAD8u;
label_1dfad8:
    // 0x1dfad8: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x1dfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1dfadc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dfadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dfae0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dfae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dfae4: 0x8c639f18  lw          $v1, -0x60E8($v1)
    ctx->pc = 0x1dfae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942488)));
    // 0x1dfae8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DFAE8u;
    {
        const bool branch_taken_0x1dfae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAE8u;
        // 0x1dfaec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfae8) {
            ctx->pc = 0x1DFB18u;
            goto label_1dfb18;
        }
    }
    ctx->pc = 0x1DFAF0u;
label_1dfaf0:
    // 0x1dfaf0: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x1dfaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1dfaf4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1dfaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1dfaf8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dfaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dfafc: 0xdc849f30  ld          $a0, -0x60D0($a0)
    ctx->pc = 0x1dfafcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294942512)));
    // 0x1dfb00: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1DFB00u;
    SET_GPR_U32(ctx, 31, 0x1DFB08u);
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1DFB00u, 0x1DFB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB08u;
label_1dfb08:
    // 0x1dfb08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFB08u;
    {
        const bool branch_taken_0x1dfb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB08u;
        // 0x1dfb0c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb08) {
            ctx->pc = 0x1DFB14u;
            goto label_1dfb14;
        }
    }
    ctx->pc = 0x1DFB10u;
label_1dfb10:
    // 0x1dfb10: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dfb10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb14:
    // 0x1dfb14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfb18:
    // 0x1dfb18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1dfb18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb1c:
    // 0x1dfb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB1Cu;
        // 0x1dfb20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFB24u;
}
