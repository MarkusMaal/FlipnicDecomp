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

// Function: entry_0015f96c
// Address: 0x15f96c - 0x15f9c4
void entry_0015f96c_0x15f96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f96c_0x15f96c");
#endif

    ctx->pc = 0x15f96cu;

    // 0x15f96c: 0x0  nop
    ctx->pc = 0x15f96cu;
    // NOP
    // 0x15f970: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x15f970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x15f974: 0x732023  subu        $a0, $v1, $s3
    ctx->pc = 0x15f974u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15f978: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15f978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15f97c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f980: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x15f980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x15f984: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15f988: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x15f988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x15f98c: 0x84840228  lh          $a0, 0x228($a0)
    ctx->pc = 0x15f98cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x15f990: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x15F990u;
    {
        const bool branch_taken_0x15f990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15f990) {
            ctx->pc = 0x15FAECu;
            return;
        }
    }
    ctx->pc = 0x15F998u;
    // 0x15f998: 0x8e442c1c  lw          $a0, 0x2C1C($s2)
    ctx->pc = 0x15f998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11292)));
    // 0x15f99c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x15f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x15f9a0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x15f9a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15f9a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15f9ac: 0x8465000a  lh          $a1, 0xA($v1)
    ctx->pc = 0x15f9acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x15f9b0: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x15f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15f9b4: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x15f9b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15f9b8: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x15f9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15f9bc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x15F9BCu;
    {
        const bool branch_taken_0x15f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9BCu;
        // 0x15f9c0: 0x708821  addu        $s1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9bc) {
            ctx->pc = 0x15FAACu;
            return;
        }
    }
    ctx->pc = 0x15F9C4u;
}
