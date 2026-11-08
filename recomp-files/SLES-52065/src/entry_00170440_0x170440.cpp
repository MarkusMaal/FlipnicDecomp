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

// Function: entry_00170440
// Address: 0x170440 - 0x170458
void entry_00170440_0x170440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170440_0x170440");
#endif

    ctx->pc = 0x170440u;

    // 0x170440: 0x9383848c  lbu         $v1, -0x7B74($gp)
    ctx->pc = 0x170440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935692)));
    // 0x170444: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x170444u;
    {
        const bool branch_taken_0x170444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170444u;
        // 0x170448: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170444) {
            ctx->pc = 0x170458u;
            return;
        }
    }
    ctx->pc = 0x17044Cu;
    // 0x17044c: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x17044cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x170450: 0x90230e52  lbu         $v1, 0xE52($at)
    ctx->pc = 0x170450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x210E52u));
    // 0x170454: 0x0  nop
    ctx->pc = 0x170454u;
    // NOP
    ctx->pc = 0x170458u;
}
