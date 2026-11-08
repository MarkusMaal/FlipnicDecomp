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

// Function: entry_00206778
// Address: 0x206778 - 0x2067b8
void entry_00206778_0x206778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206778_0x206778");
#endif

    ctx->pc = 0x206778u;

    // 0x206778: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x206778u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20677c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x20677cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x206780: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206780u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x206784: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x206784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x206788: 0xa80019  multu       $a1, $t0
    ctx->pc = 0x206788u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20678c: 0x3010  mfhi        $a2
    ctx->pc = 0x20678cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x206790: 0x2012  mflo        $a0
    ctx->pc = 0x206790u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x206794: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206798: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x206798u;
    {
        const bool branch_taken_0x206798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206798) {
            ctx->pc = 0x20679Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206798u;
            // 0x20679c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2067B8u;
            return;
        }
    }
    ctx->pc = 0x2067A0u;
    // 0x2067a0: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2067A0u;
    {
        const bool branch_taken_0x2067a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2067A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067A0u;
        // 0x2067a4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067a0) {
            ctx->pc = 0x2067C0u;
            return;
        }
    }
    ctx->pc = 0x2067A8u;
    // 0x2067a8: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x2067a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2067ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2067ACu;
    {
        const bool branch_taken_0x2067ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067ACu;
        // 0x2067b0: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067ac) {
            ctx->pc = 0x2067C4u;
            return;
        }
    }
    ctx->pc = 0x2067B4u;
    // 0x2067b4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2067b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x2067b8u;
}
