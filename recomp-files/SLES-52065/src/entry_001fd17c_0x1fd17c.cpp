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

// Function: entry_001fd17c
// Address: 0x1fd17c - 0x1fd1a8
void entry_001fd17c_0x1fd17c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd17c_0x1fd17c");
#endif

    ctx->pc = 0x1fd17cu;

    // 0x1fd17c: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD17Cu;
    {
        const bool branch_taken_0x1fd17c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1fd17c) {
            ctx->pc = 0x1FD1A8u;
            return;
        }
    }
    ctx->pc = 0x1FD184u;
    // 0x1fd184: 0x1600001f  bnez        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FD184u;
    {
        const bool branch_taken_0x1fd184 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD184u;
        // 0x1fd188: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd184) {
            ctx->pc = 0x1FD204u;
            return;
        }
    }
    ctx->pc = 0x1FD18Cu;
    // 0x1fd18c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FD18Cu;
    {
        const bool branch_taken_0x1fd18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd18c) {
            ctx->pc = 0x1FD204u;
            return;
        }
    }
    ctx->pc = 0x1FD194u;
    // 0x1fd194: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1fd194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1fd198: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fd198u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fd19c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd1a0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FD1A0u;
    {
        const bool branch_taken_0x1fd1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd1a0) {
            ctx->pc = 0x1FD204u;
            return;
        }
    }
    ctx->pc = 0x1FD1A8u;
}
