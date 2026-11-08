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

// Function: entry_00124f30
// Address: 0x124f30 - 0x124f9c
void entry_00124f30_0x124f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124f30_0x124f30");
#endif

    switch (ctx->pc) {
        case 0x124f7cu: goto label_124f7c;
        default: break;
    }

    ctx->pc = 0x124f30u;

    // 0x124f30: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x124f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x124f34: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x124f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x124f38: 0x24420b50  addiu       $v0, $v0, 0xB50
    ctx->pc = 0x124f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2896));
    // 0x124f3c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x124f3cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x210B50u));
    // 0x124f40: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x124f40u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x210B60u));
    // 0x124f44: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x124f44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x124f48: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x124f48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x124f4c: 0x92a40013  lbu         $a0, 0x13($s5)
    ctx->pc = 0x124f4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x124f50: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x124f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x124f54: 0x96a2000c  lhu         $v0, 0xC($s5)
    ctx->pc = 0x124f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x124f58: 0x96a60014  lhu         $a2, 0x14($s5)
    ctx->pc = 0x124f58u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x124f5c: 0x96a70016  lhu         $a3, 0x16($s5)
    ctx->pc = 0x124f5cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
    // 0x124f60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x124f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x124f64: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x124f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x124f68: 0x8cb40280  lw          $s4, 0x280($a1)
    ctx->pc = 0x124f68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 640)));
    // 0x124f6c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x124f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x124f70: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x124f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x124f74: 0xc047ec4  jal         func_11FB10
    ctx->pc = 0x124F74u;
    SET_GPR_U32(ctx, 31, 0x124F7Cu);
    ctx->pc = 0x124F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F74u;
    // 0x124f78: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FB10u, 0x124F74u, 0x124F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F7Cu;
label_124f7c:
    // 0x124f7c: 0x92a20012  lbu         $v0, 0x12($s5)
    ctx->pc = 0x124f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x124f80: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x124F80u;
    {
        const bool branch_taken_0x124f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F80u;
        // 0x124f84: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f80) {
            ctx->pc = 0x12500Cu;
            return;
        }
    }
    ctx->pc = 0x124F88u;
    // 0x124f88: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x124f88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124f8c: 0x14680003  bne         $v1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124F8Cu;
    {
        const bool branch_taken_0x124f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x124f8c) {
            ctx->pc = 0x124F9Cu;
            return;
        }
    }
    ctx->pc = 0x124F94u;
    // 0x124f94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x124F94u;
    {
        const bool branch_taken_0x124f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F94u;
        // 0x124f98: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f94) {
            ctx->pc = 0x124FBCu;
            return;
        }
    }
    ctx->pc = 0x124F9Cu;
}
