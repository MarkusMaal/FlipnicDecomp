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

// Function: entry_00206270
// Address: 0x206270 - 0x2062ac
void entry_00206270_0x206270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206270_0x206270");
#endif

    ctx->pc = 0x206270u;

    // 0x206270: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x206270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x206274: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x206274u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x206278: 0x24425800  addiu       $v0, $v0, 0x5800
    ctx->pc = 0x206278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22528));
    // 0x20627c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x20627cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x206280: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x206280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206284: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x206284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206288: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x206288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20628c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x20628cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x206290: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x206290u;
    {
        const bool branch_taken_0x206290 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x206294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206290u;
        // 0x206294: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206290) {
            ctx->pc = 0x2062ACu;
            return;
        }
    }
    ctx->pc = 0x206298u;
    // 0x206298: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x206298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x20629c: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x20629cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x2062a0: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x2062a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2062a4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2062a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2062a8: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2062a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    ctx->pc = 0x2062acu;
}
