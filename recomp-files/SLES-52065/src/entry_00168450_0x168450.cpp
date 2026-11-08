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

// Function: entry_00168450
// Address: 0x168450 - 0x168490
void entry_00168450_0x168450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168450_0x168450");
#endif

    ctx->pc = 0x168450u;

    // 0x168450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16845c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16845cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x168460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168464: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x168464u;
    {
        const bool branch_taken_0x168464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x168468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168464u;
        // 0x168468: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168464) {
            ctx->pc = 0x1684A8u;
            return;
        }
    }
    ctx->pc = 0x16846Cu;
    // 0x16846c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16846cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x168470: 0x2442a0d0  addiu       $v0, $v0, -0x5F30
    ctx->pc = 0x168470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942928));
    // 0x168474: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x168474u;
    {
        const bool branch_taken_0x168474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x168478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168474u;
        // 0x168478: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168474) {
            ctx->pc = 0x168490u;
            return;
        }
    }
    ctx->pc = 0x16847Cu;
    // 0x16847c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x168480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168484: 0x2442a070  addiu       $v0, $v0, -0x5F90
    ctx->pc = 0x168484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942832));
    // 0x168488: 0xc041750  jal         func_105D40
    ctx->pc = 0x168488u;
    SET_GPR_U32(ctx, 31, 0x168490u);
    ctx->pc = 0x16848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168488u;
    // 0x16848c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D40u, 0x168488u, 0x168490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168490u;
}
