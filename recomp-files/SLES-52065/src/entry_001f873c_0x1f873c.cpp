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

// Function: entry_001f873c
// Address: 0x1f873c - 0x1f878c
void entry_001f873c_0x1f873c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f873c_0x1f873c");
#endif

    switch (ctx->pc) {
        case 0x1f8774u: goto label_1f8774;
        default: break;
    }

    ctx->pc = 0x1f873cu;

    // 0x1f873c: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f873cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f8740: 0x24471680  addiu       $a3, $v0, 0x1680
    ctx->pc = 0x1f8740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x1f8744: 0xac521680  sw          $s2, 0x1680($v0)
    ctx->pc = 0x1f8744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5760), GPR_U32(ctx, 18));
    // 0x1f8748: 0xacf00010  sw          $s0, 0x10($a3)
    ctx->pc = 0x1f8748u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 16));
    // 0x1f874c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f874cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8750: 0xacf10014  sw          $s1, 0x14($a3)
    ctx->pc = 0x1f8750u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 17));
    // 0x1f8754: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f8754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f8758: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f875c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8760: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8764: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f8764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8768: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f8768u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f876c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F876Cu;
    SET_GPR_U32(ctx, 31, 0x1F8774u);
    ctx->pc = 0x1F8770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F876Cu;
    // 0x1f8770: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F876Cu, 0x1F8774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8774u;
label_1f8774:
    // 0x1f8774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8778: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8778u;
    {
        const bool branch_taken_0x1f8778 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8778u;
        // 0x1f877c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8778) {
            ctx->pc = 0x1F878Cu;
            return;
        }
    }
    ctx->pc = 0x1F8780u;
    // 0x1f8780: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f8780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8784: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8784u;
    {
        const bool branch_taken_0x1f8784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8784u;
        // 0x1f8788: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8784) {
            ctx->pc = 0x1F8794u;
            return;
        }
    }
    ctx->pc = 0x1F878Cu;
}
