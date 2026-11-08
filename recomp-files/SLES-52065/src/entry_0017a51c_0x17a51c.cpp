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

// Function: entry_0017a51c
// Address: 0x17a51c - 0x17a54c
void entry_0017a51c_0x17a51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a51c_0x17a51c");
#endif

    ctx->pc = 0x17a51cu;

    // 0x17a51c: 0x0  nop
    ctx->pc = 0x17a51cu;
    // NOP
    // 0x17a520: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x17a520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17a524: 0xc5210064  lwc1        $f1, 0x64($t1)
    ctx->pc = 0x17a524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a528: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x17a528u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x17a52c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x17a52cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x17a530: 0xe52101c4  swc1        $f1, 0x1C4($t1)
    ctx->pc = 0x17a530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 452), bits); }
    // 0x17a534: 0x8f8a85f4  lw          $t2, -0x7A0C($gp)
    ctx->pc = 0x17a534u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x17a538: 0x8d482cd0  lw          $t0, 0x2CD0($t2)
    ctx->pc = 0x17a538u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 11472)));
    // 0x17a53c: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A53Cu;
    {
        const bool branch_taken_0x17a53c = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x17a53c) {
            ctx->pc = 0x17A54Cu;
            return;
        }
    }
    ctx->pc = 0x17A544u;
    // 0x17a544: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17A544u;
    {
        const bool branch_taken_0x17a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A544u;
        // 0x17a548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a544) {
            ctx->pc = 0x17A56Cu;
            return;
        }
    }
    ctx->pc = 0x17A54Cu;
}
