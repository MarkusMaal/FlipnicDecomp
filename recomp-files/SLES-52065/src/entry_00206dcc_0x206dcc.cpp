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

// Function: entry_00206dcc
// Address: 0x206dcc - 0x206dec
void entry_00206dcc_0x206dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206dcc_0x206dcc");
#endif

    ctx->pc = 0x206dccu;

    // 0x206dcc: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x206dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x206dd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206DD0u;
    {
        const bool branch_taken_0x206dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DD0u;
        // 0x206dd4: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206dd0) {
            ctx->pc = 0x206DECu;
            return;
        }
    }
    ctx->pc = 0x206DD8u;
    // 0x206dd8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x206dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x206ddc: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x206ddcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x206de0: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x206de0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x206de4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x206DE4u;
    {
        const bool branch_taken_0x206de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DE4u;
        // 0x206de8: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206de4) {
            ctx->pc = 0x207014u;
            return;
        }
    }
    ctx->pc = 0x206DECu;
}
