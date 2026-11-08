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

// Function: entry_001d8730
// Address: 0x1d8730 - 0x1d8788
void entry_001d8730_0x1d8730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8730_0x1d8730");
#endif

    switch (ctx->pc) {
        case 0x1d8740u: goto label_1d8740;
        case 0x1d8748u: goto label_1d8748;
        default: break;
    }

    ctx->pc = 0x1d8730u;

    // 0x1d8730: 0x3404809c  ori         $a0, $zero, 0x809C
    ctx->pc = 0x1d8730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32924);
    // 0x1d8734: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d8734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d8738: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1D8738u;
    SET_GPR_U32(ctx, 31, 0x1D8740u);
    ctx->pc = 0x1D873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8738u;
    // 0x1d873c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1D8738u, 0x1D8740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8740u;
label_1d8740:
    // 0x1d8740: 0xc082222  jal         func_208888
    ctx->pc = 0x1D8740u;
    SET_GPR_U32(ctx, 31, 0x1D8748u);
    ctx->pc = 0x1D8744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8740u;
    // 0x1d8744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x1D8740u, 0x1D8748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8748u;
label_1d8748:
    // 0x1d8748: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1d8748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1d874c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1d874cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1d8750: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1d8750u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d8754: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x1d8754u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d8758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d875c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1d875cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1d8760: 0x2378825  or          $s1, $s1, $s7
    ctx->pc = 0x1d8760u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 23));
    // 0x1d8764: 0x12420030  beq         $s2, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D8764u;
    {
        const bool branch_taken_0x1d8764 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8764u;
        // 0x1d8768: 0x2769825  or          $s3, $s3, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8764) {
            ctx->pc = 0x1D8828u;
            return;
        }
    }
    ctx->pc = 0x1D876Cu;
    // 0x1d876c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1d876cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d8770: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8770u;
    {
        const bool branch_taken_0x1d8770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8770) {
            ctx->pc = 0x1D8774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8770u;
            // 0x1d8774: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8788u;
            return;
        }
    }
    ctx->pc = 0x1D8778u;
    // 0x1d8778: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8778u;
    {
        const bool branch_taken_0x1d8778 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8778u;
        // 0x1d877c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8778) {
            ctx->pc = 0x1D8798u;
            return;
        }
    }
    ctx->pc = 0x1D8780u;
    // 0x1d8780: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x1D8780u;
    {
        const bool branch_taken_0x1d8780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8780u;
        // 0x1d8784: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8780) {
            ctx->pc = 0x1D8A8Cu;
            return;
        }
    }
    ctx->pc = 0x1D8788u;
}
