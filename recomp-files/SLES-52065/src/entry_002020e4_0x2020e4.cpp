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

// Function: entry_002020e4
// Address: 0x2020e4 - 0x202140
void entry_002020e4_0x2020e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002020e4_0x2020e4");
#endif

    ctx->pc = 0x2020e4u;

    // 0x2020e4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2020E4u;
    {
        const bool branch_taken_0x2020e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2020e4) {
            ctx->pc = 0x202178u;
            return;
        }
    }
    ctx->pc = 0x2020ECu;
    // 0x2020ec: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2020ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2020f0: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x2020f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x2020f4: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x2020f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x2020f8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x2020f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x2020fc: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x2020fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x202100: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x202100u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x202104: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x202104u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x202108: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x202108u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
    // 0x20210c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x20210cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x202110: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x202110u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x202114: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x202114u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x202118: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x202118u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x20211c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x20211cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x202120: 0x69102f  dsubu       $v0, $v1, $t1
    ctx->pc = 0x202120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x202124: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x202124u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x202128: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x202128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20212c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x20212cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x202130: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x202130u;
    {
        const bool branch_taken_0x202130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202130u;
        // 0x202134: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202130) {
            ctx->pc = 0x202174u;
            return;
        }
    }
    ctx->pc = 0x202138u;
    // 0x202138: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x202138u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20213c: 0x0  nop
    ctx->pc = 0x20213cu;
    // NOP
    ctx->pc = 0x202140u;
}
