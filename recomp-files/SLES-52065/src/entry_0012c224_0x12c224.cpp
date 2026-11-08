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

// Function: entry_0012c224
// Address: 0x12c224 - 0x12c268
void entry_0012c224_0x12c224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c224_0x12c224");
#endif

    ctx->pc = 0x12c224u;

    // 0x12c224: 0x82020069  lb          $v0, 0x69($s0)
    ctx->pc = 0x12c224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    // 0x12c228: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12C228u;
    {
        const bool branch_taken_0x12c228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c228) {
            ctx->pc = 0x12C2B4u;
            return;
        }
    }
    ctx->pc = 0x12C230u;
    // 0x12c230: 0x9202004b  lbu         $v0, 0x4B($s0)
    ctx->pc = 0x12c230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x12c234: 0x9203004a  lbu         $v1, 0x4A($s0)
    ctx->pc = 0x12c234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x12c238: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x12c238u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12c23c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x12c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x12c240: 0x22023  negu        $a0, $v0
    ctx->pc = 0x12c240u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12c244: 0x30a20023  andi        $v0, $a1, 0x23
    ctx->pc = 0x12c244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)35);
    // 0x12c248: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12C248u;
    {
        const bool branch_taken_0x12c248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C248u;
        // 0x12c24c: 0x2463ff80  addiu       $v1, $v1, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c248) {
            ctx->pc = 0x12C2ACu;
            return;
        }
    }
    ctx->pc = 0x12C250u;
    // 0x12c250: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x12c250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x12c254: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C254u;
    {
        const bool branch_taken_0x12c254 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C254u;
        // 0x12c258: 0x2861ffc0  slti        $at, $v1, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c254) {
            ctx->pc = 0x12C268u;
            return;
        }
    }
    ctx->pc = 0x12C25Cu;
    // 0x12c25c: 0x34a22000  ori         $v0, $a1, 0x2000
    ctx->pc = 0x12c25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x12c260: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12C260u;
    {
        const bool branch_taken_0x12c260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C260u;
        // 0x12c264: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c260) {
            ctx->pc = 0x12C274u;
            return;
        }
    }
    ctx->pc = 0x12C268u;
}
