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

// Function: entry_00206bf0
// Address: 0x206bf0 - 0x206c28
void entry_00206bf0_0x206bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206bf0_0x206bf0");
#endif

    ctx->pc = 0x206bf0u;

    // 0x206bf0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x206bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x206bf4: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x206bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x206bf8: 0x24425900  addiu       $v0, $v0, 0x5900
    ctx->pc = 0x206bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22784));
    // 0x206bfc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x206bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x206c00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x206c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206c04: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x206c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206c08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x206c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x206c0c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x206c0cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x206c10: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x206C10u;
    {
        const bool branch_taken_0x206c10 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x206C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C10u;
        // 0x206c14: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c10) {
            ctx->pc = 0x206C28u;
            return;
        }
    }
    ctx->pc = 0x206C18u;
    // 0x206c18: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x206c18u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x206c1c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x206c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x206c20: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x206C20u;
    {
        const bool branch_taken_0x206c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C20u;
        // 0x206c24: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c20) {
            ctx->pc = 0x206D04u;
            return;
        }
    }
    ctx->pc = 0x206C28u;
}
