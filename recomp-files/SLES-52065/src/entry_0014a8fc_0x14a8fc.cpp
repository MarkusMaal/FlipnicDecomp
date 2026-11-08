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

// Function: entry_0014a8fc
// Address: 0x14a8fc - 0x14a948
void entry_0014a8fc_0x14a8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a8fc_0x14a8fc");
#endif

    ctx->pc = 0x14a8fcu;

    // 0x14a8fc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14a8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a900: 0x27b606d0  addiu       $s6, $sp, 0x6D0
    ctx->pc = 0x14a900u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
    // 0x14a904: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14a904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14a908: 0x8fa306d4  lw          $v1, 0x6D4($sp)
    ctx->pc = 0x14a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1748)));
    // 0x14a90c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a910: 0xafa306d4  sw          $v1, 0x6D4($sp)
    ctx->pc = 0x14a910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1748), GPR_U32(ctx, 3));
    // 0x14a914: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14a914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a918: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x14a918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14a91c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x14a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x14a920: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a924: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A924u;
    {
        const bool branch_taken_0x14a924 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A924u;
        // 0x14a928: 0x27b206c8  addiu       $s2, $sp, 0x6C8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a924) {
            ctx->pc = 0x14A968u;
            return;
        }
    }
    ctx->pc = 0x14A92Cu;
    // 0x14a92c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a930: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a934: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14a934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a938: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A938u;
    {
        const bool branch_taken_0x14a938 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A938u;
        // 0x14a93c: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a938) {
            ctx->pc = 0x14A948u;
            return;
        }
    }
    ctx->pc = 0x14A940u;
    // 0x14a940: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14a940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14a944: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14a944u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x14a948u;
}
