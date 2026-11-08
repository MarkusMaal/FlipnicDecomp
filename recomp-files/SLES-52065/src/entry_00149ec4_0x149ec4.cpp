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

// Function: entry_00149ec4
// Address: 0x149ec4 - 0x149f6c
void entry_00149ec4_0x149ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149ec4_0x149ec4");
#endif

    switch (ctx->pc) {
        case 0x149f14u: goto label_149f14;
        default: break;
    }

    ctx->pc = 0x149ec4u;

    // 0x149ec4: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x149ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x149ec8: 0x27a50480  addiu       $a1, $sp, 0x480
    ctx->pc = 0x149ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x149ecc: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x149eccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149ed0: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x149ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x149ed4: 0xdc480010  ld          $t0, 0x10($v0)
    ctx->pc = 0x149ed4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149ed8: 0x27a60460  addiu       $a2, $sp, 0x460
    ctx->pc = 0x149ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x149edc: 0x27a70440  addiu       $a3, $sp, 0x440
    ctx->pc = 0x149edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x149ee0: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x149ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x149ee4: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x149ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x149ee8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x149ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x149eec: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x149eecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x149ef0: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x149ef0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149ef4: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x149ef4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x149ef8: 0x7cc80000  sq          $t0, 0x0($a2)
    ctx->pc = 0x149ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 8));
    // 0x149efc: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x149efcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x149f00: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x149f00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149f04: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x149f04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149f08: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x149f08u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x149f0c: 0xc052b68  jal         func_14ADA0
    ctx->pc = 0x149F0Cu;
    SET_GPR_U32(ctx, 31, 0x149F14u);
    ctx->pc = 0x149F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149F0Cu;
    // 0x149f10: 0xfce20010  sd          $v0, 0x10($a3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ADA0u, 0x149F0Cu, 0x149F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149F14u;
label_149f14:
    // 0x149f14: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x149f14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x149f18: 0x1020006b  beqz        $at, . + 4 + (0x6B << 2)
    ctx->pc = 0x149F18u;
    {
        const bool branch_taken_0x149f18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F18u;
        // 0x149f1c: 0x214082b  sltu        $at, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f18) {
            ctx->pc = 0x14A0C8u;
            return;
        }
    }
    ctx->pc = 0x149F20u;
    // 0x149f20: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x149f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x149f24: 0x27a804e0  addiu       $t0, $sp, 0x4E0
    ctx->pc = 0x149f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x149f28: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x149f28u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149f2c: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x149f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x149f30: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x149f30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149f34: 0x27a604c0  addiu       $a2, $sp, 0x4C0
    ctx->pc = 0x149f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x149f38: 0x27a404a0  addiu       $a0, $sp, 0x4A0
    ctx->pc = 0x149f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x149f3c: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x149f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x149f40: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x149f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x149f44: 0xfd050010  sd          $a1, 0x10($t0)
    ctx->pc = 0x149f44u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 5));
    // 0x149f48: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x149f48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149f4c: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x149f4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x149f50: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x149f50u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x149f54: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x149f54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x149f58: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x149f58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149f5c: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x149f5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149f60: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x149f60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x149f64: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x149F64u;
    {
        const bool branch_taken_0x149f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F64u;
        // 0x149f68: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f64) {
            ctx->pc = 0x14A044u;
            return;
        }
    }
    ctx->pc = 0x149F6Cu;
}
