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

// Function: entry_00149a9c
// Address: 0x149a9c - 0x149b00
void entry_00149a9c_0x149a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149a9c_0x149a9c");
#endif

    switch (ctx->pc) {
        case 0x149af8u: goto label_149af8;
        default: break;
    }

    ctx->pc = 0x149a9cu;

    // 0x149a9c: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x149a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x149aa0: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x149aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x149aa4: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x149aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x149aa8: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x149aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x149aac: 0x508823  subu        $s1, $v0, $s0
    ctx->pc = 0x149aacu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x149ab0: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x149ab0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x149ab4: 0x14200219  bnez        $at, . + 4 + (0x219 << 2)
    ctx->pc = 0x149AB4u;
    {
        const bool branch_taken_0x149ab4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ab4) {
            ctx->pc = 0x14A31Cu;
            return;
        }
    }
    ctx->pc = 0x149ABCu;
    // 0x149abc: 0xafa00878  sw          $zero, 0x878($sp)
    ctx->pc = 0x149abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2168), GPR_U32(ctx, 0));
    // 0x149ac0: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x149ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x149ac4: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x149ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x149ac8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x149ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x149acc: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x149accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x149ad0: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x149ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x149ad4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x149ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x149ad8: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x149ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x149adc: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x149adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x149ae0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x149AE0u;
    {
        const bool branch_taken_0x149ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x149AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AE0u;
        // 0x149ae4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ae0) {
            ctx->pc = 0x149B00u;
            return;
        }
    }
    ctx->pc = 0x149AE8u;
    // 0x149ae8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x149ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x149aec: 0x27a70878  addiu       $a3, $sp, 0x878
    ctx->pc = 0x149aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2168));
    // 0x149af0: 0xc052d20  jal         func_14B480
    ctx->pc = 0x149AF0u;
    SET_GPR_U32(ctx, 31, 0x149AF8u);
    ctx->pc = 0x149AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149AF0u;
    // 0x149af4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B480u, 0x149AF0u, 0x149AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AF8u;
label_149af8:
    // 0x149af8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149AF8u;
    {
        const bool branch_taken_0x149af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AF8u;
        // 0x149afc: 0x8ea60014  lw          $a2, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149af8) {
            ctx->pc = 0x149B0Cu;
            return;
        }
    }
    ctx->pc = 0x149B00u;
}
