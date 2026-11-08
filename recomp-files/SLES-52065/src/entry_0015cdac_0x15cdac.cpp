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

// Function: entry_0015cdac
// Address: 0x15cdac - 0x15cdc0
void entry_0015cdac_0x15cdac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cdac_0x15cdac");
#endif

    ctx->pc = 0x15cdacu;

    // 0x15cdac: 0x0  nop
    ctx->pc = 0x15cdacu;
    // NOP
    // 0x15cdb0: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15cdb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15cdb4: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x15CDB4u;
    {
        const bool branch_taken_0x15cdb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDB4u;
        // 0x15cdb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdb4) {
            ctx->pc = 0x15CE98u;
            return;
        }
    }
    ctx->pc = 0x15CDBCu;
    // 0x15cdbc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x15cdbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15cdc0u;
}
