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

// Function: entry_00149378
// Address: 0x149378 - 0x1493c8
void entry_00149378_0x149378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149378_0x149378");
#endif

    ctx->pc = 0x149378u;

    // 0x149378: 0x27b702c0  addiu       $s7, $sp, 0x2C0
    ctx->pc = 0x149378u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x14937c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149380: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x149380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149384: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x149384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x149388: 0x8fa202c4  lw          $v0, 0x2C4($sp)
    ctx->pc = 0x149388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x14938c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149390: 0xafa202c4  sw          $v0, 0x2C4($sp)
    ctx->pc = 0x149390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 2));
    // 0x149394: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x149394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149398: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x149398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14939c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x14939cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1493a0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1493a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1493a4: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1493A4u;
    {
        const bool branch_taken_0x1493a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1493A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493A4u;
        // 0x1493a8: 0x27b602b8  addiu       $s6, $sp, 0x2B8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493a4) {
            ctx->pc = 0x1493E8u;
            return;
        }
    }
    ctx->pc = 0x1493ACu;
    // 0x1493ac: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1493acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1493b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1493b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1493b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1493b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1493b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1493B8u;
    {
        const bool branch_taken_0x1493b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1493BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493B8u;
        // 0x1493bc: 0x28883  sra         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493b8) {
            ctx->pc = 0x1493C8u;
            return;
        }
    }
    ctx->pc = 0x1493C0u;
    // 0x1493c0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1493c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1493c4: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x1493c4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x1493c8u;
}
