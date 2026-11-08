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

// Function: entry_0014a268
// Address: 0x14a268 - 0x14a2b4
void entry_0014a268_0x14a268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a268_0x14a268");
#endif

    ctx->pc = 0x14a268u;

    // 0x14a268: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a26c: 0x27b60590  addiu       $s6, $sp, 0x590
    ctx->pc = 0x14a26cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
    // 0x14a270: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14a270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14a274: 0x8fa30594  lw          $v1, 0x594($sp)
    ctx->pc = 0x14a274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1428)));
    // 0x14a278: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a27c: 0xafa30594  sw          $v1, 0x594($sp)
    ctx->pc = 0x14a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1428), GPR_U32(ctx, 3));
    // 0x14a280: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14a280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a284: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x14a284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14a288: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x14a288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x14a28c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a290: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A290u;
    {
        const bool branch_taken_0x14a290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A290u;
        // 0x14a294: 0x27b20588  addiu       $s2, $sp, 0x588 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a290) {
            ctx->pc = 0x14A2D4u;
            return;
        }
    }
    ctx->pc = 0x14A298u;
    // 0x14a298: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14a298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a29c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a2a0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a2a4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A2A4u;
    {
        const bool branch_taken_0x14a2a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2A4u;
        // 0x14a2a8: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2a4) {
            ctx->pc = 0x14A2B4u;
            return;
        }
    }
    ctx->pc = 0x14A2ACu;
    // 0x14a2ac: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14a2b0: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14a2b0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x14a2b4u;
}
