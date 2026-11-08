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

// Function: entry_001446e8
// Address: 0x1446e8 - 0x144718
void entry_001446e8_0x1446e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001446e8_0x1446e8");
#endif

    ctx->pc = 0x1446e8u;

    // 0x1446e8: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x1446e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1446ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1446ECu;
    {
        const bool branch_taken_0x1446ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1446F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446ECu;
        // 0x1446f0: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446ec) {
            ctx->pc = 0x144718u;
            return;
        }
    }
    ctx->pc = 0x1446F4u;
    // 0x1446f4: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x1446f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1446f8: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x1446f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1446fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1446fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x144700: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x144700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x144704: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x144704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x144708: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x144708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14470c: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x14470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144710: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x144714: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x144714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    ctx->pc = 0x144718u;
}
