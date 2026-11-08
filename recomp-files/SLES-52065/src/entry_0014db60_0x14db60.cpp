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

// Function: entry_0014db60
// Address: 0x14db60 - 0x14db94
void entry_0014db60_0x14db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014db60_0x14db60");
#endif

    ctx->pc = 0x14db60u;

label_14db60:
    // 0x14db60: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x14db60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14db64: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14db64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14db68: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x14db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14db6c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x14db6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14db70: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x14db70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14db74: 0xe6830000  swc1        $f3, 0x0($s4)
    ctx->pc = 0x14db74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x14db78: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x14db78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x14db7c: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x14db7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x14db80: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x14db80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x14db84: 0x1660fff6  bnez        $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x14DB84u;
    {
        const bool branch_taken_0x14db84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB84u;
        // 0x14db88: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db84) {
            ctx->pc = 0x14DB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14db60;
        }
    }
    ctx->pc = 0x14DB8Cu;
    // 0x14db8c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x14DB8Cu;
    {
        const bool branch_taken_0x14db8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB8Cu;
        // 0x14db90: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db8c) {
            ctx->pc = 0x14DD44u;
            return;
        }
    }
    ctx->pc = 0x14DB94u;
}
