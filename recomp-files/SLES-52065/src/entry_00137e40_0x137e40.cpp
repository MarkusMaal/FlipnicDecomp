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

// Function: entry_00137e40
// Address: 0x137e40 - 0x137e64
void entry_00137e40_0x137e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137e40_0x137e40");
#endif

    ctx->pc = 0x137e40u;

    // 0x137e40: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x137e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x137e44: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x137e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x137e48: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137e4c: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x137e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137e50: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x137e50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x137e54: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137e58: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x137e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137e5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x137E5Cu;
    {
        const bool branch_taken_0x137e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E5Cu;
        // 0x137e60: 0xe4e10008  swc1        $f1, 0x8($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e5c) {
            ctx->pc = 0x137EA8u;
            return;
        }
    }
    ctx->pc = 0x137E64u;
}
