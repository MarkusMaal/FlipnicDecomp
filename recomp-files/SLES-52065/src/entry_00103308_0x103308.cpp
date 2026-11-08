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

// Function: entry_00103308
// Address: 0x103308 - 0x103328
void entry_00103308_0x103308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103308_0x103308");
#endif

    ctx->pc = 0x103308u;

    // 0x103308: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x103308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10330c: 0x8c622c20  lw          $v0, 0x2C20($v1)
    ctx->pc = 0x10330cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11296)));
    // 0x103310: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x103310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x103314: 0x1440fd79  bnez        $v0, . + 4 + (-0x287 << 2)
    ctx->pc = 0x103314u;
    {
        const bool branch_taken_0x103314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103314) {
            ctx->pc = 0x1028FCu;
            return;
        }
    }
    ctx->pc = 0x10331Cu;
    // 0x10331c: 0xac702cd4  sw          $s0, 0x2CD4($v1)
    ctx->pc = 0x10331cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11476), GPR_U32(ctx, 16));
    // 0x103320: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x103320u;
    {
        const bool branch_taken_0x103320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103320u;
        // 0x103324: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103320) {
            ctx->pc = 0x103394u;
            return;
        }
    }
    ctx->pc = 0x103328u;
}
