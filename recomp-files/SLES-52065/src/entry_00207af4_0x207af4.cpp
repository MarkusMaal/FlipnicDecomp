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

// Function: entry_00207af4
// Address: 0x207af4 - 0x207b4c
void entry_00207af4_0x207af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207af4_0x207af4");
#endif

    ctx->pc = 0x207af4u;

    // 0x207af4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x207af4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x207af8: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x207af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x207afc: 0x1012  mflo        $v0
    ctx->pc = 0x207afcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207b00: 0x1810  mfhi        $v1
    ctx->pc = 0x207b00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207b04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x207b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207b0c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207b10: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207b10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207b14: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x207b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x207b18: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x207b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207b1c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x207b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207b20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x207B20u;
    {
        const bool branch_taken_0x207b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B20u;
        // 0x207b24: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b20) {
            ctx->pc = 0x207B50u;
            return;
        }
    }
    ctx->pc = 0x207B28u;
    // 0x207b28: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x207b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x207b2c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x207b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x207b30: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207B30u;
    {
        const bool branch_taken_0x207b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B30u;
        // 0x207b34: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b30) {
            ctx->pc = 0x207B4Cu;
            return;
        }
    }
    ctx->pc = 0x207B38u;
    // 0x207b38: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x207b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207b3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207B3Cu;
    {
        const bool branch_taken_0x207b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B3Cu;
        // 0x207b40: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b3c) {
            ctx->pc = 0x207B50u;
            return;
        }
    }
    ctx->pc = 0x207B44u;
    // 0x207b44: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x207b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x207b48: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x207b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    ctx->pc = 0x207b4cu;
}
