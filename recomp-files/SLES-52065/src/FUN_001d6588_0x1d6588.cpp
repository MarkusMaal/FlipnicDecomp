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

// Function: FUN_001d6588
// Address: 0x1d6588 - 0x1d65bc
void FUN_001d6588_0x1d6588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d6588_0x1d6588");
#endif

    ctx->pc = 0x1d6588u;

    // 0x1d6588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d658c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d658cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d6590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6594: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d6594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d6598: 0x8c47054c  lw          $a3, 0x54C($v0)
    ctx->pc = 0x1d6598u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d659c: 0x8c660550  lw          $a2, 0x550($v1)
    ctx->pc = 0x1d659cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x370550u));
    // 0x1d65a0: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x1d65a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d65a4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1d65a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d65a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d65a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d65ac: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x1d65acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x1d65b0: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x1d65b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1d65b4: 0x8077724  j           func_1DDC90
    ctx->pc = 0x1D65B4u;
    ctx->pc = 0x1D65B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D65B4u;
    // 0x1d65b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDC90u;
    FUN_001ddc90_0x1ddc90(rdram, ctx, runtime); return;
    ctx->pc = 0x1D65BCu;
}
