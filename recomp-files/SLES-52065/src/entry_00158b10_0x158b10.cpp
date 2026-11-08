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

// Function: entry_00158b10
// Address: 0x158b10 - 0x158b20
void entry_00158b10_0x158b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158b10_0x158b10");
#endif

    ctx->pc = 0x158b10u;

    // 0x158b10: 0x3463b5dd  ori         $v1, $v1, 0xB5DD
    ctx->pc = 0x158b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46557);
    // 0x158b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158b18: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x158B18u;
    {
        const bool branch_taken_0x158b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B18u;
        // 0x158b1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b18) {
            ctx->pc = 0x158B84u;
            return;
        }
    }
    ctx->pc = 0x158B20u;
}
