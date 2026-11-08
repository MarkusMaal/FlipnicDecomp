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

// Function: entry_0012e8e8
// Address: 0x12e8e8 - 0x12e93c
void entry_0012e8e8_0x12e8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e8e8_0x12e8e8");
#endif

    ctx->pc = 0x12e8e8u;

label_12e8e8:
    // 0x12e8e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e8ec: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12e8ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12e8f0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x12e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x12e8f4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x12e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12e8f8: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x12e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x12e8fc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x12e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12e900: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x12e900u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x12e904: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x12e904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e908: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x12e908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x12e90c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x12e90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e910: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x12e910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x12e914: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x12e914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12e918: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x12e918u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
    // 0x12e91c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12e920: 0xae830018  sw          $v1, 0x18($s4)
    ctx->pc = 0x12e920u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
    // 0x12e924: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x12e924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x12e928: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x12e928u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
    // 0x12e92c: 0x1660ffee  bnez        $s3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12E92Cu;
    {
        const bool branch_taken_0x12e92c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E92Cu;
        // 0x12e930: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e92c) {
            ctx->pc = 0x12E8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e8e8;
        }
    }
    ctx->pc = 0x12E934u;
    // 0x12e934: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x12E934u;
    {
        const bool branch_taken_0x12e934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E934u;
        // 0x12e938: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e934) {
            ctx->pc = 0x12EBA4u;
            return;
        }
    }
    ctx->pc = 0x12E93Cu;
}
