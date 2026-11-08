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

// Function: entry_00125798
// Address: 0x125798 - 0x12588c
void entry_00125798_0x125798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125798_0x125798");
#endif

    switch (ctx->pc) {
        case 0x1257ecu: goto label_1257ec;
        case 0x125818u: goto label_125818;
        default: break;
    }

    ctx->pc = 0x125798u;

    // 0x125798: 0xde470060  ld          $a3, 0x60($s2)
    ctx->pc = 0x125798u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x12579c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12579cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1257a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1257a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1257a4: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x1257a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1257a8: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x1257a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x1257ac: 0x333b8  dsll        $a2, $v1, 14
    ctx->pc = 0x1257acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 14);
    // 0x1257b0: 0x34453fff  ori         $a1, $v0, 0x3FFF
    ctx->pc = 0x1257b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x1257b4: 0x3003003f  andi        $v1, $zero, 0x3F
    ctx->pc = 0x1257b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)63);
    // 0x1257b8: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x1257b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1257bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1257bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1257c0: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1257c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1257c4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1257c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1257c8: 0xfe450060  sd          $a1, 0x60($s2)
    ctx->pc = 0x1257c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 5));
    // 0x1257cc: 0x96450062  lhu         $a1, 0x62($s2)
    ctx->pc = 0x1257ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 98)));
    // 0x1257d0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1257d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1257d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1257d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1257d8: 0xa6420062  sh          $v0, 0x62($s2)
    ctx->pc = 0x1257d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x1257dc: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x1257dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1257e0: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x1257e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1257e4: 0xc04927c  jal         func_1249F0
    ctx->pc = 0x1257E4u;
    SET_GPR_U32(ctx, 31, 0x1257ECu);
    ctx->pc = 0x1257E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1257E4u;
    // 0x1257e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249F0u, 0x1257E4u, 0x1257ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1257ECu;
label_1257ec:
    // 0x1257ec: 0x92450063  lbu         $a1, 0x63($s2)
    ctx->pc = 0x1257ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 99)));
    // 0x1257f0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1257f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1257f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1257f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1257f8: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x1257f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1257fc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1257fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x125800: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125804: 0xa2420063  sb          $v0, 0x63($s2)
    ctx->pc = 0x125804u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x125808: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x125808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x12580c: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x12580cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x125810: 0xc04927c  jal         func_1249F0
    ctx->pc = 0x125810u;
    SET_GPR_U32(ctx, 31, 0x125818u);
    ctx->pc = 0x125814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125810u;
    // 0x125814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249F0u, 0x125810u, 0x125818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125818u;
label_125818:
    // 0x125818: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x125818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12581c: 0xde480060  ld          $t0, 0x60($s2)
    ctx->pc = 0x12581cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x125820: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x125820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x125824: 0x64050004  daddiu      $a1, $zero, 0x4
    ctx->pc = 0x125824u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x125828: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x125828u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x12582c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x12582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x125830: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x125830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x125834: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x125834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125838: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x125838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12583c: 0x437b8  dsll        $a2, $a0, 30
    ctx->pc = 0x12583cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 30);
    // 0x125840: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x125840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x125844: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x125844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x125848: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x125848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12584c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12584cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125850: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x125850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x125854: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x125854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x125858: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x125858u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
    // 0x12585c: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x12585cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x125860: 0x92460064  lbu         $a2, 0x64($s2)
    ctx->pc = 0x125860u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x125864: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x125864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x125868: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x125868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x12586c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x12586cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x125870: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x125870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x125874: 0xa2440064  sb          $a0, 0x64($s2)
    ctx->pc = 0x125874u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 4));
    // 0x125878: 0x92440064  lbu         $a0, 0x64($s2)
    ctx->pc = 0x125878u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x12587c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x125880: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125884: 0xa2420064  sb          $v0, 0x64($s2)
    ctx->pc = 0x125884u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x125888: 0xae470084  sw          $a3, 0x84($s2)
    ctx->pc = 0x125888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 7));
    ctx->pc = 0x12588cu;
}
