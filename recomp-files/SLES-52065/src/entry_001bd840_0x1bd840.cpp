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

// Function: entry_001bd840
// Address: 0x1bd840 - 0x1bd8f0
void entry_001bd840_0x1bd840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd840_0x1bd840");
#endif

    switch (ctx->pc) {
        case 0x1bd86cu: goto label_1bd86c;
        case 0x1bd8acu: goto label_1bd8ac;
        case 0x1bd8bcu: goto label_1bd8bc;
        default: break;
    }

    ctx->pc = 0x1bd840u;

    // 0x1bd840: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1bd840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd844: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x1bd844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x1bd848: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1bd848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bd84c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1bd84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bd850: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd858: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1bd858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1bd85c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1bd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd860: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x1bd860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x1bd864: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x1BD864u;
    SET_GPR_U32(ctx, 31, 0x1BD86Cu);
    ctx->pc = 0x1BD868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD864u;
    // 0x1bd868: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x1BD864u, 0x1BD86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD86Cu;
label_1bd86c:
    // 0x1bd86c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x1bd86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd870: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bd870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bd874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd878: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1bd878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bd87c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x1bd87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1bd880: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1bd880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd884: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1bd884u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1bd888: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x1bd888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x1bd88c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x1bd88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd890: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1bd890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1bd894: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1bd894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1bd898: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x1bd898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1bd89c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1bd89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd8a0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1bd8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1bd8a4: 0xc06f718  jal         func_1BDC60
    ctx->pc = 0x1BD8A4u;
    SET_GPR_U32(ctx, 31, 0x1BD8ACu);
    ctx->pc = 0x1BD8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD8A4u;
    // 0x1bd8a8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC60u, 0x1BD8A4u, 0x1BD8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8ACu;
label_1bd8ac:
    // 0x1bd8ac: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1bd8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1bd8b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1bd8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd8b4: 0xc06f718  jal         func_1BDC60
    ctx->pc = 0x1BD8B4u;
    SET_GPR_U32(ctx, 31, 0x1BD8BCu);
    ctx->pc = 0x1BD8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD8B4u;
    // 0x1bd8b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC60u, 0x1BD8B4u, 0x1BD8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8BCu;
label_1bd8bc:
    // 0x1bd8bc: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1bd8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd8c0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1bd8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bd8c4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1bd8c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd8c8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1bd8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bd8cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bd8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bd8d0: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x1bd8d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bd8d4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1bd8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1bd8d8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1bd8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1bd8dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1bd8dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd8e0: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x1bd8e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bd8e4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1bd8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1bd8e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD8E8u;
    {
        const bool branch_taken_0x1bd8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD8E8u;
        // 0x1bd8ec: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd8e8) {
            ctx->pc = 0x1BD90Cu;
            return;
        }
    }
    ctx->pc = 0x1BD8F0u;
}
