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

// Function: entry_00149664
// Address: 0x149664 - 0x1496cc
void entry_00149664_0x149664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149664_0x149664");
#endif

    switch (ctx->pc) {
        case 0x14967cu: goto label_14967c;
        case 0x149688u: goto label_149688;
        default: break;
    }

    ctx->pc = 0x149664u;

    // 0x149664: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x149664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x149668: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x149668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x14966c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x14966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x149670: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x149670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x149674: 0xc0525dc  jal         func_149770
    ctx->pc = 0x149674u;
    SET_GPR_U32(ctx, 31, 0x14967Cu);
    ctx->pc = 0x149678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149674u;
    // 0x149678: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x149674u, 0x14967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14967Cu;
label_14967c:
    // 0x14967c: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x14967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x149680: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149680u;
    SET_GPR_U32(ctx, 31, 0x149688u);
    ctx->pc = 0x149684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149680u;
    // 0x149684: 0x27a50310  addiu       $a1, $sp, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149680u, 0x149688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149688u;
label_149688:
    // 0x149688: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x149688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x14968c: 0x27b10308  addiu       $s1, $sp, 0x308
    ctx->pc = 0x14968cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
    // 0x149690: 0x8fa302f4  lw          $v1, 0x2F4($sp)
    ctx->pc = 0x149690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x149694: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x149694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x149698: 0xafa40300  sw          $a0, 0x300($sp)
    ctx->pc = 0x149698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 4));
    // 0x14969c: 0xafa30304  sw          $v1, 0x304($sp)
    ctx->pc = 0x14969cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 3));
    // 0x1496a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1496a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1496a4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1496a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1496a8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1496a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1496ac: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1496ACu;
    {
        const bool branch_taken_0x1496ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1496ac) {
            ctx->pc = 0x1496D8u;
            return;
        }
    }
    ctx->pc = 0x1496B4u;
    // 0x1496b4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1496b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1496b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1496B8u;
    {
        const bool branch_taken_0x1496b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496B8u;
        // 0x1496bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496b8) {
            ctx->pc = 0x1496CCu;
            return;
        }
    }
    ctx->pc = 0x1496C0u;
    // 0x1496c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1496c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1496c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1496c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1496c8: 0x0  nop
    ctx->pc = 0x1496c8u;
    // NOP
    ctx->pc = 0x1496ccu;
}
