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

// Function: entry_001e40a4
// Address: 0x1e40a4 - 0x1e40c4
void entry_001e40a4_0x1e40a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e40a4_0x1e40a4");
#endif

    ctx->pc = 0x1e40a4u;

    // 0x1e40a4: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x1e40a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e40a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e40a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e40ac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e40acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e40b0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e40b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e40b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E40B4u;
    {
        const bool branch_taken_0x1e40b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40b4) {
            ctx->pc = 0x1E40C4u;
            return;
        }
    }
    ctx->pc = 0x1E40BCu;
    // 0x1e40bc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1E40BCu;
    {
        const bool branch_taken_0x1e40bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40BCu;
        // 0x1e40c0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40bc) {
            ctx->pc = 0x1E41D4u;
            return;
        }
    }
    ctx->pc = 0x1E40C4u;
}
