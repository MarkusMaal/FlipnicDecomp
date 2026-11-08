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

// Function: entry_00120250
// Address: 0x120250 - 0x120280
void entry_00120250_0x120250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120250_0x120250");
#endif

    ctx->pc = 0x120250u;

    // 0x120250: 0x92850036  lbu         $a1, 0x36($s4)
    ctx->pc = 0x120250u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 54)));
    // 0x120254: 0x30a4003f  andi        $a0, $a1, 0x3F
    ctx->pc = 0x120254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x120258: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x120258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x12025c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x12025Cu;
    {
        const bool branch_taken_0x12025c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12025c) {
            ctx->pc = 0x1202D4u;
            return;
        }
    }
    ctx->pc = 0x120264u;
    // 0x120264: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x120264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x120268: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x120268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x12026c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x12026cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x120270: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x120270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x120274: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x120274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x120278: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x120278u;
    {
        const bool branch_taken_0x120278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120278u;
        // 0x12027c: 0xa2830036  sb          $v1, 0x36($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120278) {
            ctx->pc = 0x1202D4u;
            return;
        }
    }
    ctx->pc = 0x120280u;
}
