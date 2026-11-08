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

// Function: entry_001719b4
// Address: 0x1719b4 - 0x171a38
void entry_001719b4_0x1719b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001719b4_0x1719b4");
#endif

    switch (ctx->pc) {
        case 0x171a1cu: goto label_171a1c;
        case 0x171a30u: goto label_171a30;
        default: break;
    }

    ctx->pc = 0x1719b4u;

    // 0x1719b4: 0x0  nop
    ctx->pc = 0x1719b4u;
    // NOP
    // 0x1719b8: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x1719b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1719bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1719bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1719c0: 0x25450003  addiu       $a1, $t2, 0x3
    ctx->pc = 0x1719c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x1719c4: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x1719c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1719c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1719c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1719cc: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x1719ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1719d0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1719d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1719d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1719d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1719d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1719d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719dc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1719dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1719e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1719e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1719e4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1719e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1719e8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1719e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719ec: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1719ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1719f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1719f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719f4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1719f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1719f8: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1719f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1719fc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1719fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a00: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x171a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x171a04: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x171a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a08: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x171a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x171a0c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x171a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a10: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x171a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x171a14: 0xc07d360  jal         func_1F4D80
    ctx->pc = 0x171A14u;
    SET_GPR_U32(ctx, 31, 0x171A1Cu);
    ctx->pc = 0x171A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A14u;
    // 0x171a18: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D80u, 0x171A14u, 0x171A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A1Cu;
label_171a1c:
    // 0x171a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x171a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a24: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x171a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x171a28: 0xc07d360  jal         func_1F4D80
    ctx->pc = 0x171A28u;
    SET_GPR_U32(ctx, 31, 0x171A30u);
    ctx->pc = 0x171A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A28u;
    // 0x171a2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D80u, 0x171A28u, 0x171A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A30u;
label_171a30:
    // 0x171a30: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x171A30u;
    {
        const bool branch_taken_0x171a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171a30) {
            ctx->pc = 0x171BBCu;
            return;
        }
    }
    ctx->pc = 0x171A38u;
}
