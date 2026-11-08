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

// Function: entry_00143260
// Address: 0x143260 - 0x14327c
void entry_00143260_0x143260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143260_0x143260");
#endif

    ctx->pc = 0x143260u;

    // 0x143260: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x143260u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x143264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143268: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x143268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x14326c: 0x90c40029  lbu         $a0, 0x29($a2)
    ctx->pc = 0x14326cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 41)));
    // 0x143270: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x143270u;
    {
        const bool branch_taken_0x143270 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x143274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143270u;
        // 0x143274: 0x90c50028  lbu         $a1, 0x28($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143270) {
            ctx->pc = 0x14327Cu;
            return;
        }
    }
    ctx->pc = 0x143278u;
    // 0x143278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14327cu;
}
