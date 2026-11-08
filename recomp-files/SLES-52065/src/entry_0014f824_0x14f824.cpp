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

// Function: entry_0014f824
// Address: 0x14f824 - 0x14f8a4
void entry_0014f824_0x14f824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f824_0x14f824");
#endif

    ctx->pc = 0x14f824u;

    // 0x14f824: 0x3c03502f  lui         $v1, 0x502F
    ctx->pc = 0x14f824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20527 << 16));
    // 0x14f828: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x14f828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x14f82c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x14f82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x14f830: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14f830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14f834: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x14f834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14f838: 0xc45023  subu        $t2, $a2, $a0
    ctx->pc = 0x14f838u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x14f83c: 0x34038024  ori         $v1, $zero, 0x8024
    ctx->pc = 0x14f83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32804);
    // 0x14f840: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x14f840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x14f844: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x14f844u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f848: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x14f848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x14f84c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x14f84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x14f850: 0x34632521  ori         $v1, $v1, 0x2521
    ctx->pc = 0x14f850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9505);
    // 0x14f854: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x14f854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x14f858: 0xffa30068  sd          $v1, 0x68($sp)
    ctx->pc = 0x14f858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 3));
    // 0x14f85c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x14f85cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f860: 0xffa30078  sd          $v1, 0x78($sp)
    ctx->pc = 0x14f860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 3));
    // 0x14f864: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x14f864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14f868: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x14f868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14f86c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14f86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f870: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x14f870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x14f874: 0x3c181400  lui         $t8, 0x1400
    ctx->pc = 0x14f874u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)5120 << 16));
    // 0x14f878: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x14f878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x14f87c: 0x252f0001  addiu       $t7, $t1, 0x1
    ctx->pc = 0x14f87cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x14f880: 0xffa30070  sd          $v1, 0x70($sp)
    ctx->pc = 0x14f880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 3));
    // 0x14f884: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x14f884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x14f888: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14f888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x14f88c: 0x34660404  ori         $a2, $v1, 0x404
    ctx->pc = 0x14f88cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x14f890: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x14f890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x14f894: 0x3465801f  ori         $a1, $v1, 0x801F
    ctx->pc = 0x14f894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32799);
    // 0x14f898: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x14f898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x14f89c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x14F89Cu;
    {
        const bool branch_taken_0x14f89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F89Cu;
        // 0x14f8a0: 0x34638020  ori         $v1, $v1, 0x8020 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32800);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f89c) {
            ctx->pc = 0x14F984u;
            return;
        }
    }
    ctx->pc = 0x14F8A4u;
}
