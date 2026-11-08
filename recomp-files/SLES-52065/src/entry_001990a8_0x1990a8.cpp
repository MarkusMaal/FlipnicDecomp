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

// Function: entry_001990a8
// Address: 0x1990a8 - 0x199108
void entry_001990a8_0x1990a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001990a8_0x1990a8");
#endif

    ctx->pc = 0x1990a8u;

    // 0x1990a8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1990a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1990ac: 0x8cc30690  lw          $v1, 0x690($a2)
    ctx->pc = 0x1990acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1680)));
    // 0x1990b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1990b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1990b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1990b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1990b8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1990b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1990bc: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1990bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1990c0: 0x106000a3  beqz        $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1990C0u;
    {
        const bool branch_taken_0x1990c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1990C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990C0u;
        // 0x1990c4: 0x24d20690  addiu       $s2, $a2, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990c0) {
            ctx->pc = 0x199350u;
            return;
        }
    }
    ctx->pc = 0x1990C8u;
    // 0x1990c8: 0x8cc80790  lw          $t0, 0x790($a2)
    ctx->pc = 0x1990c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1936)));
    // 0x1990cc: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x1990ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1990d0: 0x91050004  lbu         $a1, 0x4($t0)
    ctx->pc = 0x1990d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1990d4: 0x10a30071  beq         $a1, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x1990D4u;
    {
        const bool branch_taken_0x1990d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1990D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990D4u;
        // 0x1990d8: 0x24c70790  addiu       $a3, $a2, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990d4) {
            ctx->pc = 0x19929Cu;
            return;
        }
    }
    ctx->pc = 0x1990DCu;
    // 0x1990dc: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1990dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1990e0: 0x10a30042  beq         $a1, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1990E0u;
    {
        const bool branch_taken_0x1990e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1990e0) {
            ctx->pc = 0x1991ECu;
            return;
        }
    }
    ctx->pc = 0x1990E8u;
    // 0x1990e8: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x1990e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1990ec: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1990ECu;
    {
        const bool branch_taken_0x1990ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1990ec) {
            ctx->pc = 0x1991A4u;
            return;
        }
    }
    ctx->pc = 0x1990F4u;
    // 0x1990f4: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1990f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1990f8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1990F8u;
    {
        const bool branch_taken_0x1990f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1990f8) {
            ctx->pc = 0x199108u;
            return;
        }
    }
    ctx->pc = 0x199100u;
    // 0x199100: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x199100u;
    {
        const bool branch_taken_0x199100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199100) {
            ctx->pc = 0x199350u;
            return;
        }
    }
    ctx->pc = 0x199108u;
}
