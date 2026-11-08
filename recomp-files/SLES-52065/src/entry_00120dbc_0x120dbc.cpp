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

// Function: entry_00120dbc
// Address: 0x120dbc - 0x120df0
void entry_00120dbc_0x120dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120dbc_0x120dbc");
#endif

    ctx->pc = 0x120dbcu;

    // 0x120dbc: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x120dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x120dc0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x120DC0u;
    {
        const bool branch_taken_0x120dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DC0u;
        // 0x120dc4: 0x27b100ac  addiu       $s1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120dc0) {
            ctx->pc = 0x120E18u;
            return;
        }
    }
    ctx->pc = 0x120DC8u;
    // 0x120dc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x120dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x120dcc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x120dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x120dd0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x120dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x120dd4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x120dd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x120dd8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x120DD8u;
    {
        const bool branch_taken_0x120dd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DD8u;
        // 0x120ddc: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120dd8) {
            ctx->pc = 0x120DF0u;
            return;
        }
    }
    ctx->pc = 0x120DE0u;
    // 0x120de0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x120de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x120de4: 0xa0b30000  sb          $s3, 0x0($a1)
    ctx->pc = 0x120de4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x120de8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x120DE8u;
    {
        const bool branch_taken_0x120de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DE8u;
        // 0x120dec: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120de8) {
            ctx->pc = 0x120E04u;
            return;
        }
    }
    ctx->pc = 0x120DF0u;
}
