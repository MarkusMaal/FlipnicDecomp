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

// Function: entry_00207f54
// Address: 0x207f54 - 0x207f80
void entry_00207f54_0x207f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207f54_0x207f54");
#endif

    ctx->pc = 0x207f54u;

    // 0x207f54: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x207f54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x207f58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x207f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207f5c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x207f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x207f60: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x207f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x207f64: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x207f64u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x207f68: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x207f68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x207f6c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x207F6Cu;
    {
        const bool branch_taken_0x207f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F6Cu;
        // 0x207f70: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f6c) {
            ctx->pc = 0x207FBCu;
            return;
        }
    }
    ctx->pc = 0x207F74u;
    // 0x207f74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x207f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207f78: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x207f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x207f7c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x207f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    ctx->pc = 0x207f80u;
}
