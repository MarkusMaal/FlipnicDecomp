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

// Function: entry_00203350
// Address: 0x203350 - 0x20337c
void entry_00203350_0x203350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203350_0x203350");
#endif

    ctx->pc = 0x203350u;

    // 0x203350: 0x6a1000a  bgez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x203350u;
    {
        const bool branch_taken_0x203350 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x203354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203350u;
        // 0x203354: 0x4102f  dsubu       $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203350) {
            ctx->pc = 0x20337Cu;
            return;
        }
    }
    ctx->pc = 0x203358u;
    // 0x203358: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x203358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x20335c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20335cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x203360: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x203360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203364: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x203364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x203368: 0x5e200b  movn        $a0, $v0, $fp
    ctx->pc = 0x203368u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x20336c: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x20336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x203370: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x203370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203374: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x203374u;
    {
        const bool branch_taken_0x203374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203374u;
        // 0x203378: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203374) {
            ctx->pc = 0x203380u;
            return;
        }
    }
    ctx->pc = 0x20337Cu;
}
