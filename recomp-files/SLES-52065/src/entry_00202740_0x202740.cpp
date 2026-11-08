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

// Function: entry_00202740
// Address: 0x202740 - 0x202798
void entry_00202740_0x202740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202740_0x202740");
#endif

    switch (ctx->pc) {
        case 0x202780u: goto label_202780;
        default: break;
    }

    ctx->pc = 0x202740u;

    // 0x202740: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x202740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x202744: 0x743823  subu        $a3, $v1, $s4
    ctx->pc = 0x202744u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x202748: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x202748u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20274c: 0x24e20016  addiu       $v0, $a3, 0x16
    ctx->pc = 0x20274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 22));
    // 0x202750: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x202750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x202754: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x202754u;
    {
        const bool branch_taken_0x202754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202754u;
        // 0x202758: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202754) {
            ctx->pc = 0x2027E0u;
            return;
        }
    }
    ctx->pc = 0x20275Cu;
    // 0x20275c: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x20275cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x202760: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x202760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x202764: 0x26104f98  addiu       $s0, $s0, 0x4F98
    ctx->pc = 0x202764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20376));
    // 0x202768: 0x67182f  dsubu       $v1, $v1, $a3
    ctx->pc = 0x202768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
    // 0x20276c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20276cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x202770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202774: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x202774u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202778: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202778u;
    SET_GPR_U32(ctx, 31, 0x202780u);
    ctx->pc = 0x20277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202778u;
    // 0x20277c: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202778u, 0x202780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202780u;
label_202780:
    // 0x202780: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x202780u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x202784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202788: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x202788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20278c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20278cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202790: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x202790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x202794: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x202794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->pc = 0x202798u;
}
