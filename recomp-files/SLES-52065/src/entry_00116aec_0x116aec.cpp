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

// Function: entry_00116aec
// Address: 0x116aec - 0x116b48
void entry_00116aec_0x116aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116aec_0x116aec");
#endif

    ctx->pc = 0x116aecu;

    // 0x116aec: 0x0  nop
    ctx->pc = 0x116aecu;
    // NOP
    // 0x116af0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x116af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x116af4: 0x8c26d69c  lw          $a2, -0x2964($at)
    ctx->pc = 0x116af4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x22D69Cu));
    // 0x116af8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x116af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x116afc: 0x27828018  addiu       $v0, $gp, -0x7FE8
    ctx->pc = 0x116afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934552));
    // 0x116b00: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x116b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x116b04: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x116b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x116b08: 0x8c23cce0  lw          $v1, -0x3320($at)
    ctx->pc = 0x116b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954208)));
    // 0x116b0c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x116b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x116b10: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x116b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x116b14: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x116b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x116b18: 0x8c24d310  lw          $a0, -0x2CF0($at)
    ctx->pc = 0x116b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955792)));
    // 0x116b1c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x116b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x116b20: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x116b20u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x116b24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x116b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x116b28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x116b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x116b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116b30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x116b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116b34: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x116b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x116b38: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x116b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x116b3c: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x116b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x116b40: 0xaf808010  sw          $zero, -0x7FF0($gp)
    ctx->pc = 0x116b40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934544), GPR_U32(ctx, 0));
    // 0x116b44: 0xac22d69c  sw          $v0, -0x2964($at)
    ctx->pc = 0x116b44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956700), GPR_U32(ctx, 2));
    ctx->pc = 0x116b48u;
}
