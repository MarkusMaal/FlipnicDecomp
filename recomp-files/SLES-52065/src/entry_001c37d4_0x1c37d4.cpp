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

// Function: entry_001c37d4
// Address: 0x1c37d4 - 0x1c3814
void entry_001c37d4_0x1c37d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c37d4_0x1c37d4");
#endif

    ctx->pc = 0x1c37d4u;

    // 0x1c37d4: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x1c37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c37d8: 0x1060030b  beqz        $v1, . + 4 + (0x30B << 2)
    ctx->pc = 0x1C37D8u;
    {
        const bool branch_taken_0x1c37d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37D8u;
        // 0x1c37dc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37d8) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C37E0u;
    // 0x1c37e0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C37E0u;
    {
        const bool branch_taken_0x1c37e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c37e0) {
            ctx->pc = 0x1C382Cu;
            return;
        }
    }
    ctx->pc = 0x1C37E8u;
    // 0x1c37e8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1c37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1c37ec: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C37ECu;
    {
        const bool branch_taken_0x1c37ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37ECu;
        // 0x1c37f0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37ec) {
            ctx->pc = 0x1C3824u;
            return;
        }
    }
    ctx->pc = 0x1C37F4u;
    // 0x1c37f4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1c37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c37f8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C37F8u;
    {
        const bool branch_taken_0x1c37f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37F8u;
        // 0x1c37fc: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37f8) {
            ctx->pc = 0x1C3818u;
            return;
        }
    }
    ctx->pc = 0x1C3800u;
    // 0x1c3800: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c3800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3804: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3804u;
    {
        const bool branch_taken_0x1c3804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3804) {
            ctx->pc = 0x1C3814u;
            return;
        }
    }
    ctx->pc = 0x1C380Cu;
    // 0x1c380c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C380Cu;
    {
        const bool branch_taken_0x1c380c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c380c) {
            ctx->pc = 0x1C3820u;
            return;
        }
    }
    ctx->pc = 0x1C3814u;
}
