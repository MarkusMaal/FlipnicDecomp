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

// Function: entry_00201dc4
// Address: 0x201dc4 - 0x201e14
void entry_00201dc4_0x201dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201dc4_0x201dc4");
#endif

    ctx->pc = 0x201dc4u;

    // 0x201dc4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x201dc4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201dc8: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x201dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x201dcc: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x201dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x201dd0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x201dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x201dd4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x201dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x201dd8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x201dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x201ddc: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x201ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x201de0: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x201de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x201de4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x201de4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x201de8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x201de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x201dec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x201decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x201df0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x201DF0u;
    {
        const bool branch_taken_0x201df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201df0) {
            ctx->pc = 0x201DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201DF0u;
            // 0x201df4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201E34u;
            return;
        }
    }
    ctx->pc = 0x201DF8u;
    // 0x201df8: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x201df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
    // 0x201dfc: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x201dfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x201e00: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x201e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x201e04: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x201e04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x201e08: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x201e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x201e0c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x201e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x201e10: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x201e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->pc = 0x201e14u;
}
