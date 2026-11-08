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

// Function: entry_0014b584
// Address: 0x14b584 - 0x14b63c
void entry_0014b584_0x14b584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b584_0x14b584");
#endif

    switch (ctx->pc) {
        case 0x14b5c0u: goto label_14b5c0;
        case 0x14b5ccu: goto label_14b5cc;
        case 0x14b604u: goto label_14b604;
        case 0x14b610u: goto label_14b610;
        default: break;
    }

    ctx->pc = 0x14b584u;

    // 0x14b584: 0x0  nop
    ctx->pc = 0x14b584u;
    // NOP
    // 0x14b588: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x14b588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x14b58c: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x14b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x14b590: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x14b590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x14b594: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x14b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14b598: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14b598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b59c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b59cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5a0: 0xafa700d8  sw          $a3, 0xD8($sp)
    ctx->pc = 0x14b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
    // 0x14b5a4: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x14b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x14b5a8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x14b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x14b5ac: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x14b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14b5b0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x14b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14b5b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b5b8: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x14B5B8u;
    SET_GPR_U32(ctx, 31, 0x14B5C0u);
    ctx->pc = 0x14B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5B8u;
    // 0x14b5bc: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x14B5B8u, 0x14B5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5C0u;
label_14b5c0:
    // 0x14b5c0: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x14b5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x14b5c4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B5C4u;
    SET_GPR_U32(ctx, 31, 0x14B5CCu);
    ctx->pc = 0x14B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5C4u;
    // 0x14b5c8: 0x27a50118  addiu       $a1, $sp, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B5C4u, 0x14B5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5CCu;
label_14b5cc:
    // 0x14b5cc: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x14b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x14b5d0: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x14b5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x14b5d4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x14b5d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b5d8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x14b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b5dc: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x14b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x14b5e0: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x14b5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x14b5e4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x14b5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x14b5e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14b5ec: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x14b5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x14b5f0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x14b5f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b5f4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14b5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b5f8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x14b5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x14b5fc: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B5FCu;
    SET_GPR_U32(ctx, 31, 0x14B604u);
    ctx->pc = 0x14B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5FCu;
    // 0x14b600: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B5FCu, 0x14B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B604u;
label_14b604:
    // 0x14b604: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14b608: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14B608u;
    SET_GPR_U32(ctx, 31, 0x14B610u);
    ctx->pc = 0x14B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B608u;
    // 0x14b60c: 0x27a500f8  addiu       $a1, $sp, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14B608u, 0x14B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B610u;
label_14b610:
    // 0x14b610: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x14b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14b614: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x14b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14b618: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14b618u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b61c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x14b61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14b620: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x14b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14b624: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x14b624u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x14b628: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14b628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b62c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14b62cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14b630: 0x83a7012c  lb          $a3, 0x12C($sp)
    ctx->pc = 0x14b630u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x14b634: 0xc052e54  jal         func_14B950
    ctx->pc = 0x14B634u;
    SET_GPR_U32(ctx, 31, 0x14B63Cu);
    ctx->pc = 0x14B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B634u;
    // 0x14b638: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B950u, 0x14B634u, 0x14B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B63Cu;
}
