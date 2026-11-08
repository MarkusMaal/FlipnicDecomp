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

// Function: entry_00206ecc
// Address: 0x206ecc - 0x206f20
void entry_00206ecc_0x206ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206ecc_0x206ecc");
#endif

    ctx->pc = 0x206eccu;

    // 0x206ecc: 0x1012  mflo        $v0
    ctx->pc = 0x206eccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206ed0: 0x1810  mfhi        $v1
    ctx->pc = 0x206ed0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206ed4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x206ed4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ed8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206edc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206ee0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206ee0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206ee4: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x206ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x206ee8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206eec: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x206eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x206ef0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x206EF0u;
    {
        const bool branch_taken_0x206ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206ef0) {
            ctx->pc = 0x206EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206EF0u;
            // 0x206ef4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206F24u;
            return;
        }
    }
    ctx->pc = 0x206EF8u;
    // 0x206ef8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x206ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x206efc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x206efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x206f00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206F00u;
    {
        const bool branch_taken_0x206f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F00u;
        // 0x206f04: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f00) {
            ctx->pc = 0x206F20u;
            return;
        }
    }
    ctx->pc = 0x206F08u;
    // 0x206f08: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x206f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x206f0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x206F0Cu;
    {
        const bool branch_taken_0x206f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f0c) {
            ctx->pc = 0x206F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206F0Cu;
            // 0x206f10: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206F24u;
            return;
        }
    }
    ctx->pc = 0x206F14u;
    // 0x206f14: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x206f14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x206f18: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x206f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x206f1c: 0x0  nop
    ctx->pc = 0x206f1cu;
    // NOP
    ctx->pc = 0x206f20u;
}
