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

// Function: entry_00108364
// Address: 0x108364 - 0x108378
void entry_00108364_0x108364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108364_0x108364");
#endif

    ctx->pc = 0x108364u;

    // 0x108364: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x108364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x108368: 0x28e20018  slti        $v0, $a3, 0x18
    ctx->pc = 0x108368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x10836c: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x10836Cu;
    {
        const bool branch_taken_0x10836c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10836Cu;
        // 0x108370: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10836c) {
            ctx->pc = 0x1082DCu;
            return;
        }
    }
    ctx->pc = 0x108374u;
    // 0x108374: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108378u;
}
