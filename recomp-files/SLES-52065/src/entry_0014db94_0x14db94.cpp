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

// Function: entry_0014db94
// Address: 0x14db94 - 0x14dbc0
void entry_0014db94_0x14db94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014db94_0x14db94");
#endif

    ctx->pc = 0x14db94u;

    // 0x14db94: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x14db94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x14db98: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x14db98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x14db9c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x14db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14dba0: 0x27b70098  addiu       $s7, $sp, 0x98
    ctx->pc = 0x14dba0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x14dba4: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x14dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x14dba8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14dbac: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x14dbacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14dbb0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DBB0u;
    {
        const bool branch_taken_0x14dbb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBB0u;
        // 0x14dbb4: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbb0) {
            ctx->pc = 0x14DBC0u;
            return;
        }
    }
    ctx->pc = 0x14DBB8u;
    // 0x14dbb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14DBB8u;
    {
        const bool branch_taken_0x14dbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBB8u;
        // 0x14dbbc: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbb8) {
            ctx->pc = 0x14DBC8u;
            return;
        }
    }
    ctx->pc = 0x14DBC0u;
}
